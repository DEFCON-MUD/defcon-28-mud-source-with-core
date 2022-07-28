inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 9 }));
  set_short( "Passage - x29y36z9" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y36z9.c",
  "south" : DIR+"/rooms/x29y35z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
