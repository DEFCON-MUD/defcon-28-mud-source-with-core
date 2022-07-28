inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 5 }));
  set_short( "Hallway - x61y48z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y49z5.c",
  "south" : DIR+"/rooms/x61y47z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
