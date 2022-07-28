inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 8 }));
  set_short( "Corridor - x1y32z8" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y33z8.c",
  "south" : DIR+"/rooms/x1y31z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
