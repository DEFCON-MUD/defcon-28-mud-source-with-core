inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 6 }));
  set_short( "Corridor - x13y18z6" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y18z6.c",
  "south" : DIR+"/rooms/x13y17z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
