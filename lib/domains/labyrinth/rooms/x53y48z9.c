inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 9 }));
  set_short( "Passage - x53y48z9" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y48z9.c",
  "north" : DIR+"/rooms/x53y49z9.c",
  "south" : DIR+"/rooms/x53y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
