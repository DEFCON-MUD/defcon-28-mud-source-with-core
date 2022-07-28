inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 61, 6 }));
  set_short( "Passage - x43y61z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y62z6.c",
  "south" : DIR+"/rooms/x43y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
