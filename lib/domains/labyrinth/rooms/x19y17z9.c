inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 17, 9 }));
  set_short( "Corridor - x19y17z9" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y18z9.c",
  "south" : DIR+"/rooms/x19y16z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
