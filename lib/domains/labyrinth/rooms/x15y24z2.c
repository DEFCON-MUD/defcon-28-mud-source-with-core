inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 2 }));
  set_short( "Corridor - x15y24z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y24z2.c",
  "south" : DIR+"/rooms/x15y23z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
