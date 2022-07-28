inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 26, 6 }));
  set_short( "Hallway - x43y26z6" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y26z6.c",
  "east" : DIR+"/rooms/x44y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
