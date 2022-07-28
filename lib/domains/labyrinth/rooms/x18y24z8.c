inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 8 }));
  set_short( "Passage - x18y24z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z8.c",
  "east" : DIR+"/rooms/x19y24z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
