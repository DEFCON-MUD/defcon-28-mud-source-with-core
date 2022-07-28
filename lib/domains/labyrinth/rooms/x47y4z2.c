inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 2 }));
  set_short( "Hallway - x47y4z2" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y4z2.c",
  "east" : DIR+"/rooms/x48y4z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
