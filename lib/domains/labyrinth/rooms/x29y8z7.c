inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 7 }));
  set_short( "Passage - x29y8z7" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y8z7.c",
  "east" : DIR+"/rooms/x30y8z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
