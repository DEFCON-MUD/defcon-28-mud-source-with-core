inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 7 }));
  set_short( "Hallway - x43y42z7" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y42z7.c",
  "south" : DIR+"/rooms/x43y41z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
