inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 64, 2 }));
  set_short( "Corridor - x44y64z2" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y64z2.c",
  "east" : DIR+"/rooms/x45y64z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
