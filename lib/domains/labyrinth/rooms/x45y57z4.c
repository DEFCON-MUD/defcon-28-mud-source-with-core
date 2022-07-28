inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 57, 4 }));
  set_short( "Passage - x45y57z4" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y58z4.c",
  "south" : DIR+"/rooms/x45y56z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
