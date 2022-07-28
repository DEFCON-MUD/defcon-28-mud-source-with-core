inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 9 }));
  set_short( "Corridor - x31y26z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z9.c",
  "north" : DIR+"/rooms/x31y27z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
