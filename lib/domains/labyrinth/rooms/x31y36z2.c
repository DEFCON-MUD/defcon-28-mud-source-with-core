inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 2 }));
  set_short( "Corridor - x31y36z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y36z2.c",
  "north" : DIR+"/rooms/x31y37z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
