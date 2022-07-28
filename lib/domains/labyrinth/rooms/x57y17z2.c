inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 2 }));
  set_short( "Corridor - x57y17z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z2.c",
  "south" : DIR+"/rooms/x57y16z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
