inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 8 }));
  set_short( "Corridor - x11y36z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z8.c",
  "north" : DIR+"/rooms/x11y37z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
