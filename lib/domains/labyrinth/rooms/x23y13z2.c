inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 13, 2 }));
  set_short( "Passage - x23y13z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y14z2.c",
  "south" : DIR+"/rooms/x23y12z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
