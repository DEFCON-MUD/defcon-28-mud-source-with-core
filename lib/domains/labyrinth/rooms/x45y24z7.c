inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 7 }));
  set_short( "Corridor - x45y24z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y24z7.c",
  "east" : DIR+"/rooms/x46y24z7.c",
  "south" : DIR+"/rooms/x45y23z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
