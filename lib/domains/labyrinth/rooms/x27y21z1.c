inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 21, 1 }));
  set_short( "Passage - x27y21z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y22z1.c",
  "south" : DIR+"/rooms/x27y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
