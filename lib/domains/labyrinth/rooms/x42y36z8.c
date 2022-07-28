inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 36, 8 }));
  set_short( "Hallway - x42y36z8" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y36z8.c",
  "east" : DIR+"/rooms/x43y36z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
