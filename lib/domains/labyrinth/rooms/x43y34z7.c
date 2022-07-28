inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 7 }));
  set_short( "Corridor - x43y34z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z7.c",
  "north" : DIR+"/rooms/x43y35z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
