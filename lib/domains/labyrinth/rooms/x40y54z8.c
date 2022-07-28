inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 54, 8 }));
  set_short( "Passage - x40y54z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y54z8.c",
  "east" : DIR+"/rooms/x41y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
