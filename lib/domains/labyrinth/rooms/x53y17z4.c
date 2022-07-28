inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 4 }));
  set_short( "Corridor - x53y17z4" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z4.c",
  "south" : DIR+"/rooms/x53y16z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
