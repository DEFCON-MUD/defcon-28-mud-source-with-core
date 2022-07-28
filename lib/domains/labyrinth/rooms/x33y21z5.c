inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 21, 5 }));
  set_short( "Corridor - x33y21z5" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y22z5.c",
  "south" : DIR+"/rooms/x33y20z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
