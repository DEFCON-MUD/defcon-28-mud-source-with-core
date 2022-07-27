inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 1 }));
  set_short( "Hallway - x61y16z1" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z1.c",
  "north" : DIR+"/rooms/x61y17z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
