inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 5 }));
  set_short( "Corridor - x45y42z5" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y42z5.c",
  "south" : DIR+"/rooms/x45y41z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
