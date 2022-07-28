inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 38, 8 }));
  set_short( "Hallway - x14y38z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y38z8.c",
  "east" : DIR+"/rooms/x15y38z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
