inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 23, 9 }));
  set_short( "Hallway - x51y23z9" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y24z9.c",
  "south" : DIR+"/rooms/x51y22z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
