inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 9 }));
  set_short( "Passage - x43y25z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z9.c",
  "south" : DIR+"/rooms/x43y24z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
