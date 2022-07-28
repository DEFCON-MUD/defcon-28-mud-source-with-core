inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 2 }));
  set_short( "Passage - x15y34z2" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y34z2.c",
  "south" : DIR+"/rooms/x15y33z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
