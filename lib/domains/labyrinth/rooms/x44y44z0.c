inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 44, 0 }));
  set_short( "Passage - x44y44z0" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y44z0.c",
  "east" : DIR+"/rooms/x45y44z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
