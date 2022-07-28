inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 4 }));
  set_short( "Hallway - x45y24z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y24z4.c",
  "south" : DIR+"/rooms/x45y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
