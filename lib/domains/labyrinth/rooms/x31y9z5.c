inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 9, 5 }));
  set_short( "Passage - x31y9z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y10z5.c",
  "south" : DIR+"/rooms/x31y8z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
