inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 54, 1 }));
  set_short( "Passage - x46y54z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y54z1.c",
  "east" : DIR+"/rooms/x47y54z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
