inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 1 }));
  set_short( "Corridor - x37y18z1" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y19z1.c",
  "south" : DIR+"/rooms/x37y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
