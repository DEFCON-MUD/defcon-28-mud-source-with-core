inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 2 }));
  set_short( "Hallway - x40y14z2" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z2.c",
  "east" : DIR+"/rooms/x41y14z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
