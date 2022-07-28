inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 4 }));
  set_short( "Hallway - x43y24z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y24z4.c",
  "east" : DIR+"/rooms/x44y24z4.c",
  "north" : DIR+"/rooms/x43y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
