inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 33, 5 }));
  set_short( "Corridor - x35y33z5" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y34z5.c",
  "south" : DIR+"/rooms/x35y32z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
