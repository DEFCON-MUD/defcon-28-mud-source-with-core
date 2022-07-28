inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 1 }));
  set_short( "Hallway - x5y24z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y24z1.c",
  "south" : DIR+"/rooms/x5y23z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
