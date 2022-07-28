inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 5 }));
  set_short( "Passage - x35y36z5" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z5.c",
  "north" : DIR+"/rooms/x35y37z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
