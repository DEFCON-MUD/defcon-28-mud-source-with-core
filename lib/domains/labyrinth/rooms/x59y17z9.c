inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 17, 9 }));
  set_short( "Corridor - x59y17z9" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y18z9.c",
  "south" : DIR+"/rooms/x59y16z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
