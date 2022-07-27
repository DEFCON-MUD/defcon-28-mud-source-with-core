inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 6 }));
  set_short( "Hallway - x61y10z6" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y10z6.c",
  "north" : DIR+"/rooms/x61y11z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
