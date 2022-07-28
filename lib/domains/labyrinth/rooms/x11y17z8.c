inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 8 }));
  set_short( "Passage - x11y17z8" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z8.c",
  "south" : DIR+"/rooms/x11y16z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
