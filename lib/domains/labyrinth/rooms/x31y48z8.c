inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 8 }));
  set_short( "Passage - x31y48z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y48z8.c",
  "south" : DIR+"/rooms/x31y47z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
