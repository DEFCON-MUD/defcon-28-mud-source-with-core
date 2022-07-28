inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 7 }));
  set_short( "Corridor - x57y61z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z7.c",
  "south" : DIR+"/rooms/x57y60z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
