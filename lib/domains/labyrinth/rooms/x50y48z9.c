inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 9 }));
  set_short( "Corridor - x50y48z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z9.c",
  "east" : DIR+"/rooms/x51y48z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
