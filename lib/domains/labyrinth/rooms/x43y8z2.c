inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 2 }));
  set_short( "Passage - x43y8z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y8z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
