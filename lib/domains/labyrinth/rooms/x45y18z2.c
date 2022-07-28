inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 18, 2 }));
  set_short( "Corridor - x45y18z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y18z2.c",
  "east" : DIR+"/rooms/x46y18z2.c",
  "south" : DIR+"/rooms/x45y17z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
