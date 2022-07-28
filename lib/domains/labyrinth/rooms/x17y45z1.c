inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 45, 1 }));
  set_short( "Hallway - x17y45z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y46z1.c",
  "south" : DIR+"/rooms/x17y44z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
