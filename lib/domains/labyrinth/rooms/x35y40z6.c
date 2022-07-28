inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 6 }));
  set_short( "Passage - x35y40z6" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y41z6.c",
  "south" : DIR+"/rooms/x35y39z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
