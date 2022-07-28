inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 23, 9 }));
  set_short( "Hallway - x15y23z9" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y24z9.c",
  "south" : DIR+"/rooms/x15y22z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
