inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 1 }));
  set_short( "Hallway - x35y61z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z1.c",
  "south" : DIR+"/rooms/x35y60z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
