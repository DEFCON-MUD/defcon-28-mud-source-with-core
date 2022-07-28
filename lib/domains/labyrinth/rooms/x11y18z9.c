inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 18, 9 }));
  set_short( "Passage - x11y18z9" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y18z9.c",
  "south" : DIR+"/rooms/x11y17z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
